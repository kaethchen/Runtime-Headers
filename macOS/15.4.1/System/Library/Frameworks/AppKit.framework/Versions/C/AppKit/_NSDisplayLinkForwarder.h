@class _NSDisplayLink;

@interface _NSDisplayLinkForwarder : NSObject {
    _NSDisplayLink *_displayLink;
}

- (void).cxx_destruct;
- (void)displayAvailabilityDidChange:(id)a0;
- (void)displayLinkDidFire:(id)a0;
- (void)providerDidUpdate:(id)a0;

@end
