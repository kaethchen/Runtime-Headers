@interface CPPeoplePickerConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ shareSheetSessionID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
