@class NSMutableArray;

@interface ILMediaBrowserOutlineTableColumn : NSTableColumn {
    NSMutableArray *_ILDataCells;
}

- (void)dealloc;
- (id)dataCellForRow:(int)a0;
- (void)stopAllProgressCells;

@end
