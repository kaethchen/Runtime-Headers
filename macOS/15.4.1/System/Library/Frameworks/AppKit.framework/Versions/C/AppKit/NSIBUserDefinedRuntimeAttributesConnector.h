@class NSArray;

@interface NSIBUserDefinedRuntimeAttributesConnector : NSObject {
    NSArray *keyPaths;
    NSArray *values;
    id object;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)object;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)setObject:(id)a0;
- (id)label;
- (void)setLabel:(id)a0;
- (id)source;
- (id)values;
- (void)setDestination:(id)a0;
- (id)destination;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;
- (id)keyPaths;
- (void)setKeyPaths:(id)a0;
- (void)setSource:(id)a0;
- (void)setValues:(id)a0;

@end
