@class NSMutableDictionary;

@interface VCPSearchContext : NSObject <NSSecureCoding> {
    NSMutableDictionary *_entities;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)entities;
- (id)initWithEntities:(id)a0;
- (void)addIdentifiers:(id)a0 forType:(long long)a1;
- (void)setIdentifiers:(id)a0 forType:(long long)a1;

@end
