/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIConcretePasteboard : UIPasteboard {
    NSString * _name;
}

@property (nonatomic, copy) NSString *name;

+ (id)_pasteboardNamed:(id)arg1 createIfNotFound:(BOOL)arg2;
+ (id)_pasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)_pasteboardWithUniqueName;
+ (id)generalPasteboard;
+ (id)pasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)pasteboardWithUniqueName;
+ (void)removePasteboardWithName:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)URLs;
- (id)_initWithName:(id)arg1;
- (id)_itemsCoercibleToClass:(Class)arg1;
- (void)_saveItemCollection:(id)arg1;
- (void)_sendPasteboardTypesChangedNotificationOldTypes:(id)arg1 newTypes:(id)arg2;
- (void)_setItemsAndSave:(id)arg1 options:(id)arg2;
- (void)_setItemsAndSaveFromObjects:(id)arg1 ofClass:(Class)arg2;
- (void)_setPersistent:(BOOL)arg1;
- (void)addItems:(id)arg1;
- (int)changeCount;
- (id)color;
- (id)colors;
- (BOOL)containsPasteboardTypes:(id)arg1;
- (BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (BOOL)hasColors;
- (BOOL)hasImages;
- (BOOL)hasStrings;
- (BOOL)hasURLs;
- (id)image;
- (id)images;
- (BOOL)isPersistent;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (id)items;
- (id)name;
- (int)numberOfItems;
- (id)pasteboardTypes;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 options:(id)arg2;
- (void)setName:(id)arg1;
- (void)setPersistent:(BOOL)arg1;
- (void)setString:(id)arg1;
- (void)setStrings:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURLs:(id)arg1;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)string;
- (id)strings;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end