@class NSString;

@interface _EXQuery : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ inner;
    void /* unknown type, empty encoding */ resultType;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, retain) void /* unknown type, empty encoding */ predicate;
@property (nonatomic) void /* unknown type, empty encoding */ includePostprocessing;
@property (nonatomic) void /* unknown type, empty encoding */ allowsDuplicates;
@property (nonatomic, copy) NSString *extensionPointIdentifier;
@property (nonatomic) unsigned int platform;
@property (nonatomic) void /* unknown type, empty encoding */ excludeLockedApps;
@property (nonatomic, readonly) long long hash;

+ (id)executeQuery:(id)a0;
+ (id)extensionPointIdentifierQuery:(id)a0;
+ (id)executeQueries:(id)a0;
+ (id)extensionPointIdentifierQuery:(id)a0 platform:(unsigned int)a1;
+ (void)executeQueries:(id)a0 completionHandler:(id /* block */)a1;
+ (void)executeQuery:(id)a0 completionHandler:(id /* block */)a1;
+ (id)allExtensionsQuery;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensionPointIdentifier:(id)a0;
- (BOOL)matches:(id)a0;
- (BOOL)matchesRecord:(id)a0;
- (id)initWithExtensionPointIdentifier:(id)a0 predicate:(id)a1;

@end
