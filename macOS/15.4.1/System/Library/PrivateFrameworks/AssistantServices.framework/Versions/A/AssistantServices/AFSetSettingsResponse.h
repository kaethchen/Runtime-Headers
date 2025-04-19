@class NSArray;

@interface AFSetSettingsResponse : AFSiriResponse {
    NSArray *_settingChanges;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithRequest:(id)a0 settingChanges:(id)a1;
- (id)settingChanges;

@end
