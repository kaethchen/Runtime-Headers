@class NSString, NFNote;

@interface NFNoteBody : NSManagedObject

@property (copy, nonatomic) NSString *htmlString;
@property (retain, nonatomic) NFNote *note;

@end
