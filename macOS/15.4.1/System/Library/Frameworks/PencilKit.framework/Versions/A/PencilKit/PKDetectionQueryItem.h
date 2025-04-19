@class NSSet, NSBezierPath;

@interface PKDetectionQueryItem : NSObject

@property (readonly, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) NSBezierPath *baselinePath;

@end
