@class NSUUID, NSString;

@interface SFSpeechAnalyzerOptionsLoggingInfo : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *asrID;
@property (readonly, copy, nonatomic) NSUUID *requestID;
@property (readonly, copy, nonatomic) NSString *dictationUIInteractionID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAsrID:(id)a0 requestID:(id)a1 dictationUIInteractionID:(id)a2;

@end
