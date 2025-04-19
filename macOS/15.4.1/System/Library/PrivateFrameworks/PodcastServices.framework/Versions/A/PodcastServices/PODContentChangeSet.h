@class NSArray, PODLibrarySettings, PODContentAnchor, NSString;

@interface PODContentChangeSet : NSObject <PODSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PODContentAnchor *anchor;
@property (retain, nonatomic) PODLibrarySettings *librarySettings;
@property (retain, nonatomic) NSArray *libraryStationSyncDictionaries;
@property (readonly, nonatomic) NSArray *changes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nullChangeSetForDomain:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isNull;
- (id)initWithChanges:(id)a0 anchor:(id)a1;

@end
