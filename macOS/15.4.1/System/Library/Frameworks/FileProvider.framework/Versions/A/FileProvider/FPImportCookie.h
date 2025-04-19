@class NSMutableDictionary;

@interface FPImportCookie : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *entries;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)addEntry:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)hasExpired;
- (id)providersWithOngoingImport;
- (void)removeEntryForPathRelativeToVolumeRoot:(id)a0;

@end
