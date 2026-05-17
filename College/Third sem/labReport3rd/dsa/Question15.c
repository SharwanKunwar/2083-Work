#include <stdio.h>

int adj[10][10], n, vis[10];

void dfs(int v)
{
    vis[v] = 1;
    printf("%d ", v);

    for (int i = 0; i < n; i++)
        if (adj[v][i] && !vis[i])
            dfs(i);
}

void bfs(int s)
{
    int q[10], f = 0, r = 0;
    int v, i;

    vis[s] = 1;
    q[r++] = s;

    while (f < r)
    {
        v = q[f++];
        printf("%d ", v);

        for (i = 0; i < n; i++)
            if (adj[v][i] && !vis[i])
            {
                vis[i] = 1;
                q[r++] = i;
            }
    }
}

int main()
{
    int i, j;

    n = 4;
    adj[0][1] = adj[1][0] = 1;
    adj[0][2] = adj[2][0] = 1;
    adj[1][3] = adj[3][1] = 1;

    for (i = 0; i < n; i++)
        vis[i] = 0;
    dfs(0);

    printf("\n");

    for (i = 0; i < n; i++)
        vis[i] = 0;
    bfs(0);
}