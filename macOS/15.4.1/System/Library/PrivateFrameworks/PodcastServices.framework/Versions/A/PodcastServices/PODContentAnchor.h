@class NSString;

@interface PODContentAnchor : NSObject <PODSecureCoding, PODEquatable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *domain;
@property (nonatomic) long long revision;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) NSString *libraryPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nullAnchorForDomain:(id)a0;
+ (id)nullAnchorForDomain:(id)a0 libraryPath:(id)a1;
+ (id)userDefaultsKeyForSavedAnchorInDomain:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isNull;
- (id)initWithDomain:(id)a0 revision:(long long)a1 sourceIdentifier:(id)a2;
- (id)initWithDomain:(id)a0 revision:(long long)a1 sourceIdentifier:(id)a2 libraryPath:(id)a3;
- (BOOL)isEqualToEquatable:(id)a0;
- (void)resetDomainForTests;
- (void)resetSourceIdentifierForTests;

@end
