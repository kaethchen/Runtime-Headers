@interface BRNWPathMonitorWrapper : NSObject

+ (void)cancelPathMonitor:(id)a0;
+ (id)createPathMonitorWithQueue:(id)a0 changeHandler:(id /* block */)a1;
+ (int)getStatusOfPath:(id)a0;
+ (BOOL)pathHasDNS:(id)a0;
+ (BOOL)usingCellular:(id)a0;

@end
