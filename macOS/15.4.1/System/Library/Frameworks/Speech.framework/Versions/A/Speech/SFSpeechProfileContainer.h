@class NSURL, NSString;

@interface SFSpeechProfileContainer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *personaId;
@property (readonly, nonatomic) NSString *userId;
@property (readonly, nonatomic) NSString *loggableUserId;

+ (id)defaultContainer;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPersona:(id)a0;
- (id)initWithURL:(id)a0 personaId:(id)a1 userId:(id)a2 loggableUserId:(id)a3;

@end
