@class MFRedundantContentMarkup, NSObject;
@protocol OS_os_log;

@interface MFRedundantTextIdentifier : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) MFRedundantContentMarkup *redundantContentMarkup;

+ (void)initialize;
+ (id)_htmlMarkerForContentType:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_attachmentContextsByURLforAttachmentsByURL:(id)a0;
- (id)initWithMessage:(id)a0 messageBody:(id)a1 ancestorMessage:(id)a2 ancestorMessageBody:(id)a3;

@end
