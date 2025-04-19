@class NSString, NSArray;

@interface TPSUserGuide : NSObject <NSSecureCoding, NSCopying> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ symbol;
    void /* unknown type, empty encoding */ gradientColorStrings;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ referrer;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ _topicIdentifier;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ platformIndependent;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *symbol;
@property (nonatomic, readonly) NSArray *gradientColorStrings;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ gradient;
@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, copy) NSString *referrer;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *description;

+ (id)getUserGuideFromURL:(id)a0;
+ (id)privateURLWithBookIdentifier:(id)a0 topicIdentifier:(id)a1 version:(id)a2 referrer:(id)a3;
+ (id)urlWithBook:(id)a0 topic:(id)a1 anchor:(id)a2 version:(id)a3 referrer:(id)a4;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 version:(id)a1 text:(id)a2 symbol:(id)a3 platform:(id)a4 platformIndependent:(BOOL)a5 gradientColorStrings:(id)a6;

@end
