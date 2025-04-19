@class NSString, NSData, NSURL, NSNumber, NSMutableArray;

@interface FAFolderAction : FAScriptableObject <NSSecureCoding> {
    NSURL *_folderURL;
    NSNumber *_enabled;
    NSString *_name;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL propagateChangesToFolderActionsDispatcher;
@property BOOL hasBeenAddedToAFrontEnd;
@property (retain) NSData *bookmark;
@property (retain, nonatomic) NSURL *folderURL;
@property (retain, nonatomic) NSNumber *enabled;
@property (retain, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *volume;
@property (readonly, nonatomic) BOOL hasScripts;
@property (retain) NSMutableArray *scripts;

+ (id)folderActionWithURL:(id)a0;
+ (id)folderActionWithBookmark:(id)a0 name:(id)a1 enabled:(id)a2 scripts:(id)a3;
+ (id)folderActionWithURL:(id)a0 enabled:(id)a1;
+ (id)keyInContainer;

- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setName:(id)a0;
- (void)updateName;
- (void)removeObjectFromScriptsAtIndex:(unsigned long long)a0;
- (unsigned long long)countOfScripts;
- (id)deleteVerb:(id)a0;
- (id)enableVerb:(id)a0;
- (BOOL)hasScriptWithURL:(id)a0;
- (void)insertObject:(id)a0 inScriptsAtIndex:(unsigned long long)a1;
- (id)objectInScriptsAtIndex:(unsigned long long)a0;
- (void)replaceObjectInScriptsAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)scriptNamed:(id)a0;
- (BOOL)shouldCallDispatcher;

@end
