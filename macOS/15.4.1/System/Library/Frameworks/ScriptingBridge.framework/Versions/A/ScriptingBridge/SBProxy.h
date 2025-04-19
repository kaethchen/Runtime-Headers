@class NSDictionary, NSError, SBObject;

@interface SBProxy : NSProxy {
    SBObject *_createdObject;
    NSDictionary *_properties;
    id _data;
    NSError *_lastError;
}

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)doesNotRecognizeSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithData:(id)a0;
- (id)initWithProperties:(id)a0;
- (id)lastError;
- (void)setLastError:(id)a0;
- (BOOL)exists;
- (void)addToElementArray:(id)a0 atLocation:(id)a1;
- (unsigned int)codeInContext:(id)a0;
- (id)initWithData:(id)a0 andProperties:(id)a1;

@end
