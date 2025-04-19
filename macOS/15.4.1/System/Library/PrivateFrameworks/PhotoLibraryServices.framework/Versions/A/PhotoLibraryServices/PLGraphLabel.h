@class NSSet, NSString;

@interface PLGraphLabel : PLManagedObject

@property (nonatomic) unsigned int code;
@property (retain, nonatomic) NSSet *edges;
@property (retain, nonatomic) NSSet *nodesBeingPrimaryLabel;
@property (retain, nonatomic) NSSet *nodesBeingAdditionalLabel;
@property (retain, nonatomic) NSSet *edgesBeingPrimaryLabel;
@property (readonly, copy, nonatomic) NSString *plsClassName;

+ (id)entityName;
+ (id)_insertLabelWithCode:(unsigned int)a0 inManagedObjectContext:(id)a1;
+ (BOOL)_needsLabelUpdateCheckFromGlobalValues:(id)a0;
+ (void)ensureLabelsAreUpdatedInContext:(id)a0;
+ (id)fetchLabelWithCode:(unsigned int)a0 inContext:(id)a1;
+ (id)labelNameFromCode:(unsigned int)a0;

@end
