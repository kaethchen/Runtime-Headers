@interface _EXUtil : NSObject

+ (const struct { unsigned int x0[8]; } *)auditTokenForCurrentProcess;
+ (void)queryControllerDelegate:(id)a0 didUpdateController:(id)a1;
+ (void)queryControllerDelegate:(id)a0 didUpdateController:(id)a1 enabledCount:(unsigned long long)a2 disabledCount:(unsigned long long)a3 unelectedCount:(unsigned long long)a4;

@end
