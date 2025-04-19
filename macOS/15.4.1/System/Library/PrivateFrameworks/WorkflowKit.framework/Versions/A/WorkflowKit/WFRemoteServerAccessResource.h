@interface WFRemoteServerAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (id)init;
- (id)name;
- (unsigned long long)status;
- (id)icon;

@end
