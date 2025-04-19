@class NSString, PLGraphNode, NSDate;

@interface PLGraphNodeValue : PLManagedObject

@property (retain, nonatomic) PLGraphNode *node;
@property (copy, nonatomic) NSString *valueName;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSDate *dateValue;
@property (nonatomic) BOOL booleanValue;
@property (nonatomic) long long intValue;
@property (nonatomic) double floatValue;

+ (id)entityName;
+ (void)_debug_assertAllValuesAreOfType:(id)a0 inCollection:(id)a1;
+ (id)fetchGraphNodeValuesWithName:(id)a0 andValues:(id)a1 forValueType:(id)a2 inContext:(id)a3 prefetchNode:(BOOL)a4;

- (BOOL)isInsertedDeletedOrChanged;
- (BOOL)valueDidChange;

@end
