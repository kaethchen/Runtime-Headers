@class ABRecordContext, ABGroup, NSString;

@interface ABGroupDragSource : NSObject

@property (readonly) ABRecordContext *recordContext;
@property (readonly) ABGroup *group;
@property (readonly) NSString *name;
@property (readonly) NSString *entryIdentifier;

- (void).cxx_destruct;
- (id)initWithRecordContext:(id)a0 group:(id)a1 name:(id)a2 entryIdentifier:(id)a3;

@end
