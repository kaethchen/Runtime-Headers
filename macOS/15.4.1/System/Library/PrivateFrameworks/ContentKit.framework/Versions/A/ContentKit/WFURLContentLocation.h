@class NSSet, NSString;

@interface WFURLContentLocation : WFContentLocation <NSSecureCoding, NSCopying, WFSerializableContent> {
    NSString *_localizedTitle;
}

@property (class, readonly, nonatomic) WFURLContentLocation *evernoteLocation;
@property (class, readonly, nonatomic) WFURLContentLocation *giphyLocation;
@property (class, readonly, nonatomic) WFURLContentLocation *imgurLocation;
@property (class, readonly, nonatomic) WFURLContentLocation *instapaperLocation;
@property (class, readonly, nonatomic) WFURLContentLocation *pinboardLocation;
@property (class, readonly, nonatomic) WFURLContentLocation *pocketLocation;
@property (class, readonly, nonatomic) WFURLContentLocation *todoistLocation;
@property (class, readonly, nonatomic) WFURLContentLocation *trelloLocation;
@property (class, readonly, nonatomic) WFURLContentLocation *tumblrLocation;
@property (class, readonly, nonatomic) WFURLContentLocation *wordpressLocation;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *hostnames;
@property (readonly, nonatomic) BOOL allowsAnyHostname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)invalidHostnameErrorForInputURL:(id)a0;
+ (id)locationMatchingAnyHostname;
+ (id)locationWithHostname:(id)a0;
+ (id)locationWithHostnames:(id)a0;
+ (id)locationWithURL:(id)a0 error:(id *)a1;
+ (id)locationWithURLs:(id)a0 error:(id *)a1;
+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)matches:(id)a0;
- (id)localizedTitle;
- (id)hostnamesSortedAlphabetically;
- (id)initWithHostnames:(id)a0;
- (id)initWithHostnames:(id)a0 allowsAnyHostname:(BOOL)a1;
- (unsigned long long)managedLevel;
- (id)wfSerializedRepresentation;

@end
