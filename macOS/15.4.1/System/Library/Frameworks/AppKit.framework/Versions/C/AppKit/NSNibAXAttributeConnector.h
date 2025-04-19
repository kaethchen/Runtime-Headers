@class NSString;

@interface NSNibAXAttributeConnector : NSObject <NSCoding> {
    id _destination;
    NSString *_attributeType;
    NSString *_attributeValue;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (id)label;
- (void)setLabel:(id)a0;
- (id)source;
- (id)attributeType;
- (void)setDestination:(id)a0;
- (BOOL)_isAXConnector;
- (id)attributeValue;
- (id)destination;
- (void)establishConnection;
- (void)instantiateWithObjectInstantiator:(id)a0;
- (void)setAttributeType:(id)a0;
- (void)setAttributeValue:(id)a0;
- (void)setSource:(id)a0;

@end
