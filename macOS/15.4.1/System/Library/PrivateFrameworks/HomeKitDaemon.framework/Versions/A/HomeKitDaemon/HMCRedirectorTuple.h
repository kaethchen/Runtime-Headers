@class HMCRedirector;

@interface HMCRedirectorTuple : HMFObject <HMFCancellable> {
    HMCRedirector *_owner;
    id _target;
    SEL _selector;
}

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (id)attributeDescriptions;

@end
