@class NSString;

@interface PLFilePathDescription : NSObject {
    NSString *_path;
}

+ (id)descriptionWithFileURL:(id)a0;
+ (id)descriptionWithPath:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithPath:(id)a0;

@end
