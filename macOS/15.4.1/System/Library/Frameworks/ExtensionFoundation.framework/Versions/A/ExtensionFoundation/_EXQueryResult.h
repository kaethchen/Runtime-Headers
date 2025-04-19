@class NSSet;

@interface _EXQueryResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identities;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSSet *identities;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ availablility;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentities:(id)a0;
- (id)initWithAvailablility:(id)a0;

@end
