@class NSArray;

@interface ABDirectoryServicesImageTask : CNTask {
    NSArray *_emailAddresses;
}

- (void)dealloc;
- (id)run:(id *)a0;
- (id)initWithEmailAddresses:(id)a0;

@end
