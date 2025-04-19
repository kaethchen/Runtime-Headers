@interface _MDQueryPtr : NSObject {
    struct __MDQuery { } *_query;
}

- (void)dealloc;
- (struct __MDQuery { } *)query;
- (id)initWithQuery:(struct __MDQuery { } *)a0;

@end
