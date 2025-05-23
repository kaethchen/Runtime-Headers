@interface AFShowSettingRequest : AFSiriRequest {
    long long _settingType;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (id)_initWithSettingType:(long long)a0;
- (long long)settingType;

@end
