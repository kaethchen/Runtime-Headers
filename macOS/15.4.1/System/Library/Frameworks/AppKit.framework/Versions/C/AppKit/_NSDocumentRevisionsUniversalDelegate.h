@class NSString;

@interface _NSDocumentRevisionsUniversalDelegate : NSObject <CAAnimationDelegate> {
    id /* block */ _block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegateWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
