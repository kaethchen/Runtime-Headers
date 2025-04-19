@class ICAttachment, NSArray, ICNote, NSDictionary, CKShare, NSObject, NSManagedObjectContext;
@protocol OS_dispatch_queue;

@interface ICDrawingHashtagsAndMentionsController : NSObject {
    NSObject<OS_dispatch_queue> *_contactsRequestQueue;
}

@property (weak, nonatomic) ICAttachment *attachment;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) ICNote *note;
@property (readonly, nonatomic) CKShare *share;
@property (readonly, nonatomic) NSArray *eligibleShareParticipants;
@property (copy, nonatomic) NSDictionary *mentionTokensForParticipants;

- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;
- (void)fetchMentionTokensForParticipants:(id)a0 completion:(id /* block */)a1;

@end
