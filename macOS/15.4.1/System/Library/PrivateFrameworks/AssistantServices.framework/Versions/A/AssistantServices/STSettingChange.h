@interface STSettingChange : STSiriModelObject {
    long long _settingType;
    id _valueBeforeUpdate;
    id _valueAfterUpdate;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSettingType:(long long)a0 valueBeforeUpdate:(id)a1 valueAfterUpdate:(id)a2;
- (long long)settingType;
- (id)valueAfterUpdate;
- (id)valueBeforeUpdate;

@end
