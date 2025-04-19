@class NSURL;

@interface _KSControlFileController : NSObject {
    NSURL *_url;
}

- (id)description;
- (void).cxx_destruct;
- (id)contents;
- (void)reset;
- (void)setContents:(id)a0;
- (BOOL)checkIfExists;
- (id)initWithName:(id)a0 inDirectory:(id)a1;

@end
