@interface AMSSecureCodableError : NSError

- (void)encodeWithCoder:(id)a0;
- (BOOL)_secureCodingSupportedByObject:(id)a0;
- (id)_secureCodableUserInfoDictionary;

@end
