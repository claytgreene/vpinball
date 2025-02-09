#ifndef H_IMAGE_DIALOG
#define H_IMAGE_DIALOG

class ImageDialog : public CDialog
{
public:
   ImageDialog();
   virtual ~ImageDialog();

protected:
   virtual void OnDestroy();
   virtual void OnClose();
   virtual BOOL OnInitDialog();
   virtual INT_PTR DialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
   virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
   virtual void OnOK();
   virtual void OnCancel();

private:
   CResizer m_resizer;

   void Import();
   void Export();
   void DeleteImage();
   void Reimport();
   void UpdateAll();
   void ShowWhereUsed();
   void ReimportFrom();
   void LoadPosition();
   void SavePosition();
   void UpdateImages();

   static int m_columnSortOrder;
   static bool m_doNotChange;  // to avoid triggering LVN_ITEMCHANGING or LVN_ITEMCHANGED code on deletion
};

class WhereUsedDialog : public CDialog
{
public:
   WhereUsedDialog();
   virtual ~WhereUsedDialog();

protected:
   virtual void OnDestroy();
   virtual void OnClose();
   virtual BOOL OnInitDialog();
   virtual INT_PTR DialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
   virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
   virtual void OnOK();
   virtual void OnCancel();

private:
   CResizer m_resizer;

   //Remmed below block because I don't have any functions called by buttons yet - jarringmars
   void Import();
   void Export();
   //void DeleteWhereUsed();
   void Reimport();
   void UpdateAll();
   void ShowWhereUsed();
   void ReimportFrom();
   void LoadPosition();
   void SavePosition();
   //void UpdateWhereUsed();

   static int m_columnSortOrder;
   static bool m_doNotChange; // to avoid triggering LVN_ITEMCHANGING or LVN_ITEMCHANGED code on deletion
};

#endif // !H_IMAGE_DIALOG
