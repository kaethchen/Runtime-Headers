@class NSArray;

@interface STUpdateAlarmAction : STAlarmAction {
    NSArray *_modifications;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)modifications;
- (id)_initWithModifications:(id)a0;

@end
