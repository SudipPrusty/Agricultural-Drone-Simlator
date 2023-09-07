using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void Index_Back()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(0);
    }
    public void LoadDroneScene()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(1);
    }
    public void LoadAnimationScene()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(2);
    }
    public void LoadSelectionScene()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene(3);
    }
    public void Quit()
    {
        
    }
    
}
