@class FTServiceStatus;

@interface FTiMessageStatus : NSObject

@property (readonly, nonatomic) FTServiceStatus *serviceStatus;
@property (readonly, nonatomic) BOOL iMessageSupported;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initPrivate;

@end
