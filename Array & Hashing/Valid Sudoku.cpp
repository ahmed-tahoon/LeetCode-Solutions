class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {

        vector<set<int>> rows(9);
        vector<set<int>> cols(9);
        int blocks[3][3][10] = {0};

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {

                if (board[i][j] == '.')
                {
                    continue;
                }

                int curr = board[i][j] - '0';

                if (rows[i].count(curr) || cols[j].count(curr) ||
                    blocks[i / 3][j / 3][curr] != 0)
                {
                    return false;
                }

                rows[i].insert(curr);
                cols[j].insert(curr);
                blocks[i / 3][j / 3][curr] = curr;
            }
        }
        return true;
    }
};