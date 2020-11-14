#include"LinkQueue.h"

int main()
{
          LinkQueue queue;
          InitLinkQueue(&queue);

          for (int i = 0; i < 50; ++i)
          {
                    EnQueue(&queue, i);
          }
          DestroyLinkQueue(&queue);

          return 0;
}