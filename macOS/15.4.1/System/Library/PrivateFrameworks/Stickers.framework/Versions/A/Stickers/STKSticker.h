@class NSArray, NSUUID, NSString, NSDate, NSData;

@interface STKSticker : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ representations;
    void /* unknown type, empty encoding */ accessibilityName;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ searchText;
    void /* unknown type, empty encoding */ sanitizedPrompt;
    void /* unknown type, empty encoding */ promptPrimaryLanguageIdentifier;
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ externalURI;
    void /* unknown type, empty encoding */ _companionRecentUUID;
}

@property (class, nonatomic, readonly) NSDate *kGenmojiFirstBetaReleaseDate;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL distributionIsRestricted;
@property (nonatomic, readonly) BOOL canDistribute;
@property (nonatomic, readonly) NSArray *distributionRestrictions_ObjC;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSUUID *id;
@property (nonatomic, copy) NSArray *representations;
@property (nonatomic, copy) NSString *accessibilityName;
@property (nonatomic) void /* unknown type, empty encoding */ byteCount;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic, copy) NSString *sanitizedPrompt;
@property (nonatomic, copy) NSString *promptPrimaryLanguageIdentifier;
@property (nonatomic, readonly) BOOL isGeneratedSticker;
@property (nonatomic) void /* unknown type, empty encoding */ effect;
@property (nonatomic, copy) NSData *metadata;
@property (nonatomic, copy) NSString *externalURI;
@property (nonatomic, retain) void /* unknown type, empty encoding */ attributionInfo;
@property (nonatomic) void /* unknown type, empty encoding */ creationDate;
@property (nonatomic) void /* unknown type, empty encoding */ lastUsedDate;
@property (nonatomic) void /* unknown type, empty encoding */ libraryIndex;
@property (nonatomic, copy) NSUUID *_companionRecentUUID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
