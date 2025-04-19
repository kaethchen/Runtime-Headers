@class NSString, NSUUID;

@interface _SFAnalyzerClientInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *clientID;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSString *applicationName;
@property (readonly, copy, nonatomic) NSString *inputOrigin;
@property (readonly, copy, nonatomic) NSUUID *asrID;
@property (readonly, copy, nonatomic) NSUUID *requestID;
@property (readonly, copy, nonatomic) NSString *dictationUIInteractionID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithID:(id)a0 source:(id)a1 applicationName:(id)a2 inputOrigin:(id)a3 asrID:(id)a4 requestID:(id)a5 dictationUIInteractionID:(id)a6;

@end
