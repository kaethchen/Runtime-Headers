@interface SecureMAHelper : NSObject

@property (nonatomic) void /* function */ *logger;

- (void)log:(id)a0;
- (id)initWithLogger:(void /* function */ *)a0;
- (void)clearGraftList;
- (id)copyGraftList:(id *)a0;
- (BOOL)graftSecureAssetsFromLastBootSession;

@end
