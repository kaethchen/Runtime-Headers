@class NSURL, NSString;

@interface SPMVolume : NSObject

@property (readonly) NSURL *URL;
@property (readonly) NSString *name;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 name:(id)a1;

@end
