@class NSString, NSArray;

@interface SUOSUAppStoreAuditInfo : NSObject

@property unsigned long long failureReason;
@property (retain) NSString *failureDescription;
@property (retain) NSArray *appsFailedToQuit;

+ (id)cacheUpdateAuditInfo:(id)a0;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)_parseAuditInfo:(id)a0;
- (id)initWithSUOSUURL:(id)a0;

@end
