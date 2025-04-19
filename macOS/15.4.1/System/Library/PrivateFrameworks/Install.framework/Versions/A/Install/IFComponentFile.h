@interface IFComponentFile : IFComponent

+ (id)type;

- (id)sha1;
- (BOOL)isEqualToComponent:(id)a0;
- (id)_sha1StringForFile:(id)a0;
- (id)initWithPath:(id)a0 andSha1:(id)a1;

@end
