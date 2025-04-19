@class NSString, PLGraphEdge, NSDate;

@interface PLGraphEdgeValue : PLManagedObject

@property (retain, nonatomic) PLGraphEdge *edge;
@property (copy, nonatomic) NSString *valueName;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSDate *dateValue;
@property (nonatomic) BOOL booleanValue;
@property (nonatomic) long long intValue;
@property (nonatomic) double floatValue;

+ (id)entityName;

@end
