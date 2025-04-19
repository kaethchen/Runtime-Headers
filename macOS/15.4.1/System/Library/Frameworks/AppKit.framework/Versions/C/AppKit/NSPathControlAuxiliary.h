@class NSPathComponentCell;

@interface NSPathControlAuxiliary : NSObject {
    id _unsafeDelegate;
}

@property unsigned long long dropOperation;
@property (retain) NSPathComponentCell *dropCell;

- (void).cxx_destruct;

@end
