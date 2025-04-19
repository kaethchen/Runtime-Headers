@interface FSClientTaskUpdateHandler : NSObject <FSClientHostXPC>

@property (copy) id /* block */ taskHandler;

- (void).cxx_destruct;
- (void)taskStatusUpdate:(id)a0;

@end
