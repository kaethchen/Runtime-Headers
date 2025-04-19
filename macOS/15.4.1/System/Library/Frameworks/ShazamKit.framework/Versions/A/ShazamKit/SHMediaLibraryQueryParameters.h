@class NSString;

@interface SHMediaLibraryQueryParameters : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long resultsLimit;
@property (readonly) unsigned long long filterOptions;
@property (readonly) BOOL ascending;
@property (readonly) BOOL shouldUpdate;
@property (readonly, copy) NSString *providerIdentifier;

+ (id)defaultParameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)commonInitWithResultsLimit:(long long)a0 filterOptions:(unsigned long long)a1 ascending:(BOOL)a2 shouldUpdate:(BOOL)a3 providerIdentifier:(id)a4;
- (id)initWithResultsLimit:(long long)a0;
- (id)initWithResultsLimit:(long long)a0 filterOptions:(unsigned long long)a1;
- (id)initWithResultsLimit:(long long)a0 filterOptions:(unsigned long long)a1 ascending:(BOOL)a2;
- (id)initWithResultsLimit:(long long)a0 filterOptions:(unsigned long long)a1 ascending:(BOOL)a2 providerIdentifier:(id)a3;
- (id)initWithResultsLimit:(long long)a0 filterOptions:(unsigned long long)a1 ascending:(BOOL)a2 shouldUpdate:(BOOL)a3;
- (id)initWithResultsLimit:(long long)a0 filterOptions:(unsigned long long)a1 ascending:(BOOL)a2 shouldUpdate:(BOOL)a3 providerIdentifier:(id)a4;
- (BOOL)validateLimit:(long long)a0;

@end
